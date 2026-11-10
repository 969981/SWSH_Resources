/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01485970; name: FUN_01485970
 */


void FUN_01485970(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  uVar2 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e8));
  uVar3 = FUN_0087d610(uVar2,2);
  puVar1 = PTR_DAT_0272a0f8;
  if ((uVar3 & 1) == 0) {
    local_28 = *(undefined8 *)(PTR_DAT_0272a0f8 + 0x38);
    FUN_00ffd010(param_1 + 0x100,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x58);
    FUN_00ffd010(param_1 + 0x100,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x78);
    goto LAB_01485a58;
  }
  if (param_2 == 1) {
LAB_01485a1c:
    local_28 = *(undefined8 *)(PTR_DAT_0272a0f8 + 0x50);
    FUN_00ffd010(param_1 + 0x100,&local_28);
    if (param_2 == 3) {
      return;
    }
  }
  else {
    local_28 = *(undefined8 *)(PTR_DAT_0272a0f8 + 0x30);
    FUN_00ffd010(param_1 + 0x100,&local_28);
    if (param_2 != 2) goto LAB_01485a1c;
  }
  local_28 = *(undefined8 *)(PTR_DAT_0272a0f8 + 0x70);
LAB_01485a58:
  FUN_00ffd010(param_1 + 0x100,&local_28);
  return;
}


