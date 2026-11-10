/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523a40; name: FUN_00523a40
 */


undefined8 FUN_00523a40(long param_1,ulong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x198) + 0x108);
  if ((cVar1 == '\0') && ((param_2 & 1) == 0)) {
    return 0;
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x60) = 0;
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x60) = 1;
    return 0;
  }
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x31d8);
    FUN_00517ae0(
                "CPostEffect::SetLightShaftEnable(): Initialize() with PFXINIT_LIGHTSHAFT flag for light shafts.\n"
                );
  }
  return 1;
}


