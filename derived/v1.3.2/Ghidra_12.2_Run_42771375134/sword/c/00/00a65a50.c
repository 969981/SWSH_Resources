/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a65a50; name: FUN_00a65a50
 */


void FUN_00a65a50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  lVar2 = *(long *)PTR_DAT_027108b8;
  lVar1 = *(long *)(lVar2 + 0x58);
  FUN_012b4da0(auStack_30,*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x180));
  FUN_012b4070(param_1 + 0x18f8,auStack_30);
  lVar1 = *(long *)(lVar2 + 0x168);
  FUN_012b4da0(auStack_30,*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x180));
  FUN_012b4070(param_1 + 0x1a20,auStack_30);
  return;
}


