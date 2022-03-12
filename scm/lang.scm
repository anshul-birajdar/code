(load "pmatch.scm")

(define eval-expr
  (lambda (expr)
    (pmatch expr
      [,n (guard (number? n))
        n]
      [(add1 ,e)
        (add1(eval-expr e))]
      [(sub1 ,e)
        (sub1(eval-expr e))]
      [(* ,e1 ,e2)
        (* (eval-expr e1) (eval-expr e2))]
      [(if ,t ,c ,a)
        (if  (eval-expr t)
             (eval-expr c)
             (eval-expr a))]
      [(,rator ,rand)
       ((eval-expr rator)
       (eval-expr rand))]
        )))

