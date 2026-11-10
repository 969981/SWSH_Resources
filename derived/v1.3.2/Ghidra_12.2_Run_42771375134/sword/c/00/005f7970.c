/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f7970; name: FUN_005f7970
 */


undefined8 FUN_005f7970(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                    (*(long **)(param_1 + 8),0xa8,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                     ,0xef);
  FUN_00639320(lVar1,param_1);
  *(long *)(param_1 + 0x250) = lVar1;
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_006394a0(lVar1);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (*(long **)(param_1 + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x250) + 0x18))();
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  return 0;
}


