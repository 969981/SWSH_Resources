/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae0e0; name: FUN_003ae0e0
 */


void FUN_003ae0e0(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x808);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(&local_38);
  puVar1 = (undefined4 *)
           (*(long *)(lVar2 + 8) + ((ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff) * 0x18);
  *puVar1 = local_38;
  puVar1[1] = local_34;
  puVar1[2] = local_30;
  puVar1[3] = local_2c;
  puVar1[4] = local_28;
  puVar1[5] = local_24;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  FUN_003c6b10(0,param_1,6,0);
  return;
}


