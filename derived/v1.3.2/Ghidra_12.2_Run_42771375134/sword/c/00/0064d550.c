/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064d550; name: FUN_0064d550
 */


void FUN_0064d550(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02714a00 + 0x10);
  if ((char)param_1[0x1e] != '\0') {
    (**(code **)PTR_DAT_027146f8)(param_1 + 5);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)param_1[1] + 0x48))
              ((long *)param_1[1],param_1[0x1b],
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandCache_Impl.cpp"
               ,0x90);
    param_1[0x1b] = 0;
  }
  if (param_1[0x1a] != 0) {
    FUN_006530c0(param_1[0x1a],param_1[0x1c]);
    if ((long *)param_1[0x1a] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1a] + 0x18))();
      param_1[0x1a] = 0;
    }
  }
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


