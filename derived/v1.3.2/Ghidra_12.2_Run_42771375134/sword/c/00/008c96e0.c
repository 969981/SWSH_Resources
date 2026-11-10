/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c96e0; name: FUN_008c96e0
 */


void FUN_008c96e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_28;
  
  uVar2 = *(undefined8 *)(PTR_DAT_02717ad0 + (ulong)*(uint *)(param_1 + 0x73c) * 0x88 + 0x58);
  lVar1 = param_1 + 0x100;
  local_28 = uVar2;
  FUN_00ffd010(lVar1,&local_28);
  local_38 = uVar2;
  local_28 = uVar2;
  FUN_00ffd600(lVar1,&local_38);
  FUN_00ffd510(lVar1,&local_28);
  lVar1 = FUN_00ffdb00(lVar1,PTR_DAT_02717ad8 + (ulong)*(uint *)(param_1 + 0x73c) * 8);
  *(undefined8 *)(lVar1 + 0xe0) = 0xcbf29ce484222645;
  return;
}


