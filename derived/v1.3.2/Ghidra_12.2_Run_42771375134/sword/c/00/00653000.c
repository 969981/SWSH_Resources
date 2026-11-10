/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00653000; name: FUN_00653000
 */


undefined8 FUN_00653000(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_005bd990(param_1 + 0x188,(long)*(int *)(param_2 + 4),0,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp"
                       ,0x19b);
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = lVar1 - *(long *)(param_1 + 0x458);
    if (lVar1 < 0) {
      return 0;
    }
    uVar2 = 1;
    *param_3 = lVar1;
  }
  return uVar2;
}


