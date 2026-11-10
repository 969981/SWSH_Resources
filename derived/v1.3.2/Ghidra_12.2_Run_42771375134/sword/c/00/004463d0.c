/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004463d0; name: FUN_004463d0
 */


undefined4 FUN_004463d0(long param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  char *__dest;
  char acStack_b0 [128];
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    puVar3 = (uint *)FUN_0044e300(param_1 + 8);
    uVar1 = *puVar3;
    if (uVar1 == 0) {
      uVar2 = 1;
    }
    else {
      __dest = acStack_b0 + (0x80 - ((ulong)(uVar1 + 1) + 0xf & 0x1fffffff0));
      strncpy(__dest,(char *)(puVar3 + 1),(ulong)uVar1);
      __dest[uVar1] = '\0';
      uVar2 = FUN_00432b30(__dest);
    }
    FUN_0044e600(param_1 + 8);
  }
  return uVar2;
}


