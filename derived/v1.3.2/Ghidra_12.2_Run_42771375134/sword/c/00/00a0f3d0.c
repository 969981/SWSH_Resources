/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0f3d0; name: FUN_00a0f3d0
 */


void FUN_00a0f3d0(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  if (*(byte *)(param_1 + 0x18) != (param_2 & 1)) {
    bVar3 = (param_2 & 1) != 0;
    lVar1 = 4;
    if (bVar3) {
      lVar1 = 5;
    }
    lVar2 = 2;
    if (bVar3) {
      lVar2 = 3;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if ((param_3 & 1) == 0) {
      lVar1 = lVar2;
    }
    local_38 = *(undefined8 *)(param_1 + lVar1 * 8 + 0x20);
    FUN_00ffd010(uVar4,&local_38);
    if ((param_3 & 1) == 0) {
      lVar1 = 0x38;
      if ((param_2 & 1) == 0) {
        lVar1 = 0x30;
      }
      local_38 = *(undefined8 *)(param_1 + lVar1 + 0x20);
      FUN_00ffd010(uVar4,&local_38);
    }
  }
  *(byte *)(param_1 + 0x18) = param_2 & 1;
  return;
}


