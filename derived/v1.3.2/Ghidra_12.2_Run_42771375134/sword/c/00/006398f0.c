/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006398f0; name: FUN_006398f0
 */


undefined8 FUN_006398f0(void)

{
  undefined8 uVar1;
  
  *(undefined **)PTR_DAT_027146b8 = PTR_nvnBootstrapLoader_027146c0;
  uVar1 = nvnBootstrapLoader("nvnDeviceGetProcAddress");
  *(undefined8 *)PTR_DAT_027146c8 = uVar1;
  FUN_0199e900(0,uVar1);
  return 1;
}


