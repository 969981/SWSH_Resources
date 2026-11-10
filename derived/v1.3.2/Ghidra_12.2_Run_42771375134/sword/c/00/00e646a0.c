/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e646a0; name: FUN_00e646a0
 */


void FUN_00e646a0(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_50 [8];
  char *local_48;
  long local_38;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x188))
                    (*(long **)(param_1 + 0x70),PTR_DAT_0271fcb8,0);
  if (iVar1 == 2) {
    if (0x13 < param_2 - 0x13) goto LAB_00e647a8;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x188))
                      (*(long **)(param_1 + 0x70),PTR_DAT_0271fcb8,0);
    if ((0x12 < param_2) || (iVar1 != 1)) goto LAB_00e647a8;
  }
  plVar2 = *(long **)(param_1 + 0x70);
  FUN_00e61600(auStack_50,plVar2,param_2);
  if (*local_48 != '\0') {
    (**(code **)(*plVar2 + 0x1f8))(plVar2);
    (**(code **)(*plVar2 + 0x180))(0,plVar2,PTR_DAT_0271e870);
    (**(code **)(*plVar2 + 0x1f0))(plVar2,0);
    (**(code **)(*plVar2 + 0x1b0))(plVar2,auStack_50);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
LAB_00e647a8:
  *(undefined4 *)(param_1 + 0x60) = 2;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}


