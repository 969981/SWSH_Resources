/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d2c0; name: FUN_0087d2c0
 */


uint FUN_0087d2c0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_58 [28];
  undefined1 auStack_3c [28];
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  lVar3 = FUN_00866030();
  FUN_00864810(auStack_3c,uVar1,*(undefined1 *)(lVar3 + 0x278));
  FUN_0086bee0(*(undefined8 *)(param_1 + 0x98),auStack_58,0xd);
  uVar2 = FUN_0077d930(auStack_58,auStack_3c);
  return uVar2 & 1;
}


