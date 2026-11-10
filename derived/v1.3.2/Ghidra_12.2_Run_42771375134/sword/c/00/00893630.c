/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00893630; name: FUN_00893630
 */


undefined8 FUN_00893630(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  if ((*param_1 != 0) && (**(char **)(*param_1 + 0x60) != '\0')) {
    iVar1 = (int)param_1[1];
    if (1 < iVar1) {
      *(int *)(param_1 + 1) = iVar1 + -1;
      return 1;
    }
    if (iVar1 == 1) {
      if (*(char *)((long)param_1 + 0xc) == '\0') {
        uVar3 = *(undefined8 *)PTR_DAT_02717598;
        FUN_006cf0c0(auStack_50,param_1);
        uVar2 = FUN_00895660(uVar3,auStack_50,0,0,0);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
      else {
        *(undefined1 *)((long)param_1 + 0xe) = 1;
        uVar3 = *(undefined8 *)PTR_DAT_02717598;
        FUN_006cf0c0(auStack_50,param_1);
        uVar2 = FUN_00895660(uVar3,auStack_50,1,PTR_LAB_027175a8,param_1);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0xe) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 2) = 900;
      return 1;
    }
  }
  return 0;
}


