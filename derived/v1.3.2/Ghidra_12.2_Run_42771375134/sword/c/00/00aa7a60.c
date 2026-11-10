/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7a60; name: FUN_00aa7a60
 */


void FUN_00aa7a60(long param_1,uint param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  long local_38;
  long local_28;
  
  if ((*(uint *)(param_1 + 0x10) != param_2) &&
     ((byte)(&DAT_02631640)[(long)(int)*(uint *)(param_1 + 0x10) * 0x10] <=
      (byte)(&DAT_02631640)[-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4]))
  {
    if (((int)param_2 < 6) && (param_2 != 0)) {
      lVar1 = *(long *)PTR_DAT_027107a8;
      FUN_0010d170(&local_28,*(undefined8 *)(&DAT_02631648 + (long)(int)param_2 * 0x10));
      FUN_006cf0c0(auStack_50,&local_28);
      FUN_008962c0(lVar1 + 0x108,auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    *(uint *)(param_1 + 0x10) = param_2;
  }
  return;
}


