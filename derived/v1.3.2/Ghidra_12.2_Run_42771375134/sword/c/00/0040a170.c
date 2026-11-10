/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040a170; name: FUN_0040a170
 */


void FUN_0040a170(long *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x10))();
  iVar3 = *param_2;
  if (iVar3 == 2) {
    FUN_00406560(*(undefined8 *)PTR_DAT_02712a60,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
    lVar2 = param_1[0xe];
  }
  else if (iVar3 == 1) {
    FUN_004063f0(*(undefined8 *)PTR_DAT_02712a60,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 param_2[4]);
    lVar2 = param_1[0xe];
  }
  else {
    if (iVar3 == 0) {
      FUN_00406230(*(undefined8 *)PTR_DAT_02712a60,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                   param_2[4]);
    }
    lVar2 = param_1[0xe];
  }
  if ((lVar2 != 0) &&
     (((0 < *(short *)(lVar2 + 0x90) || (0 < *(short *)(lVar2 + 0x94))) &&
      (iVar3 = (int)param_1[0x18], iVar3 != 0)))) {
    lVar2 = (ulong)(iVar3 - 1) << 3;
    do {
      while ((plVar1 = *(long **)(param_1[0x17] + lVar2), (char)param_2[8] != '\0' &&
             (plVar1[0x10] != 0))) {
        iVar3 = iVar3 + -1;
        lVar2 = lVar2 + -8;
        if (iVar3 == 0) goto LAB_0040a29c;
      }
      (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar3 != 0);
  }
LAB_0040a29c:
                    /* WARNING: Could not recover jumptable at 0x0040a2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


