/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067a4f0; name: FUN_0067a4f0
 */


void FUN_0067a4f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02714dd0 + 0x10);
  lVar3 = param_1[0x15];
  if (lVar3 != 0) {
    plVar1 = param_1 + 0x13;
    do {
      plVar2 = (long *)*plVar1;
      if (plVar2 != (long *)0x0) {
        lVar3 = plVar2[3];
        lVar4 = plVar2[4];
        if (lVar3 == 0) {
          if (lVar4 == 0) {
            *plVar1 = 0;
            param_1[0x14] = 0;
          }
          else {
            *(undefined8 *)(lVar4 + 0x18) = 0;
            *plVar1 = lVar4;
          }
LAB_0067a574:
          plVar2[3] = 0;
          plVar2[4] = 0;
          param_1[0x15] = param_1[0x15] + -1;
        }
        else {
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x18) = lVar3;
            *(long *)(lVar3 + 0x20) = lVar4;
            goto LAB_0067a574;
          }
          if (((long *)param_1[0x14] == plVar2) && ((long *)param_1[0x14] != (long *)0x0)) {
            *(undefined8 *)(lVar3 + 0x20) = 0;
            param_1[0x14] = lVar3;
            goto LAB_0067a574;
          }
        }
        (**(code **)(*plVar2 + 0x18))();
        lVar3 = param_1[0x15];
      }
    } while (lVar3 != 0);
  }
  param_1[0x11] = (long)(PTR_DAT_02714dd8 + 0x10);
  FUN_005bf750(param_1 + 1);
  return;
}


