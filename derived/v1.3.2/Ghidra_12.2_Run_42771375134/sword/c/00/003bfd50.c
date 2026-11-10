/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bfd50; name: FUN_003bfd50
 */


void FUN_003bfd50(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  FUN_001145b0(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x748),*(undefined4 *)(param_1 + 0xb0));
  lVar3 = *(long *)(param_1 + 0x50);
  if (((*(long *)(lVar3 + 0xb0) != 0) && (uVar1 = FUN_003be9f0(lVar3,0), (uVar1 & 1) != 0)) &&
     (puVar2 = *(undefined8 **)(lVar3 + 0xb0), puVar2 != (undefined8 *)0x0)) {
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  *(undefined1 *)(param_1 + 0xb6) = 1;
  if (*(long *)(param_1 + 200) != 0) {
    FUN_003c16d0(*(long *)(param_1 + 200),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x800));
  }
  FUN_003ba7d0(param_1,5,0,0xc);
  *(ushort *)(param_1 + 0xb4) = *(ushort *)(param_1 + 0xb4) & 0xf9fb;
  if (*(uint *)(param_1 + 0xb8) < 0xfffffffe) {
    FUN_003dd880(*(undefined8 *)(param_1 + 0x48),param_1);
  }
  for (lVar3 = *(long *)(param_1 + 0x38); lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_003fd6d0(lVar3);
  }
  return;
}


