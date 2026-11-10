/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bb7d0; name: FUN_009bb7d0
 */


undefined8 * FUN_009bb7d0(ulong *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *param_1 & 0xfffffffffffffffe;
  if ((*param_1 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 + 8);
  }
  if (uVar2 == 0) {
    puVar1 = operator_new(0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_0080efb0(uVar2,0,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_0080eeb0(uVar2,puVar1,PTR_LAB_02718710);
  }
  *param_1 = (ulong)puVar1 | 1;
  puVar1[1] = uVar2;
  return puVar1;
}


