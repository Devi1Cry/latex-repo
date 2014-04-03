(TeX-add-style-hook "CS550-Prog2Report"
 (lambda ()
    (LaTeX-add-labels
     "sec:conf-comp-linux"
     "sec:system-calls"
     "sec:kernel-module"
     "sec:exper-with-bad"
     "sec:using-libr-funct"
     "sec:deref-null-point"
     "sec:returning-non-zero"
     "sec:call-panic-funct")
    (TeX-run-style-hooks
     "xspace"
     "commons"
     ""
     "latex2e"
     "art11"
     "article"
     "11pt")))

