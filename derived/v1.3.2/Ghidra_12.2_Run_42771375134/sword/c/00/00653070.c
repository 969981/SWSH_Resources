/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00653070; name: FUN_00653070
 */


uint FUN_00653070(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_005bd990(param_1 + 0x188,param_2,0,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp"
                       ,0x19b);
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = lVar2 - *(long *)(param_1 + 0x458);
    *param_4 = lVar2;
    uVar1 = (uint)((ulong)lVar2 >> 0x3f) ^ 1;
  }
  return uVar1;
}


