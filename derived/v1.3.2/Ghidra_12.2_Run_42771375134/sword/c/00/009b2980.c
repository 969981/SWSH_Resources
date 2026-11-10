/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2980; name: FUN_009b2980
 */


undefined4 FUN_009b2980(long param_1,char param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  
  iVar1 = *(int *)PTR_DAT_02718608;
  piVar2 = *(int **)(param_1 + 600);
  if ((((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) || (*piVar2 != 2)) ||
     (piVar2[2] != iVar1)) {
    piVar2 = *(int **)(param_1 + 0x278);
    if (((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) ||
       ((*piVar2 != 2 || (piVar2[2] != iVar1)))) {
      piVar2 = *(int **)(param_1 + 0x298);
      if (((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) ||
         ((*piVar2 != 2 || (piVar2[2] != iVar1)))) {
        piVar2 = *(int **)(param_1 + 0x2b8);
        if ((((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) || (*piVar2 != 2)) ||
           (piVar2[2] != iVar1)) {
          piVar2 = *(int **)(param_1 + 0x2d8);
          if (((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) ||
             ((*piVar2 != 2 || (piVar2[2] != iVar1)))) {
            piVar2 = *(int **)(param_1 + 0x2f8);
            if (((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) ||
               ((*piVar2 != 2 || (piVar2[2] != iVar1)))) {
              piVar2 = *(int **)(param_1 + 0x318);
              if ((((piVar2 == (int *)0x0) || ((char)piVar2[1] != param_2)) || (*piVar2 != 2)) ||
                 (piVar2[2] != iVar1)) {
                piVar2 = *(int **)(param_1 + 0x338);
                if (piVar2 == (int *)0x0) {
                  return 0;
                }
                if ((char)piVar2[1] != param_2) {
                  return 0;
                }
                if (*piVar2 != 2) {
                  return 0;
                }
                if (piVar2[2] != iVar1) {
                  return 0;
                }
                plVar3 = (long *)(param_1 + 0x338);
              }
              else {
                plVar3 = (long *)(param_1 + 0x318);
              }
            }
            else {
              plVar3 = (long *)(param_1 + 0x2f8);
            }
          }
          else {
            plVar3 = (long *)(param_1 + 0x2d8);
          }
        }
        else {
          plVar3 = (long *)(param_1 + 0x2b8);
        }
      }
      else {
        plVar3 = (long *)(param_1 + 0x298);
      }
    }
    else {
      plVar3 = (long *)(param_1 + 0x278);
    }
  }
  else {
    plVar3 = (long *)(param_1 + 600);
  }
  *param_3 = (long)(piVar2 + 3);
  return *(undefined4 *)(*plVar3 + 0x2720);
}


