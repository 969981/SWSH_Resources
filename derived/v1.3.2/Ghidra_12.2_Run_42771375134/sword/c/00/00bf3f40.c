/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf3f40; name: FUN_00bf3f40
 */


void FUN_00bf3f40(long param_1)

{
  long lVar1;
  
  FUN_00bf6ed0(*(undefined8 *)(param_1 + 0xb8));
  FUN_00bf8110(*(undefined8 *)(param_1 + 0xe0),0);
  FUN_00bf8110(*(undefined8 *)(param_1 + 0xe0),1);
  FUN_00bf8110(*(undefined8 *)(param_1 + 0xe0),2);
  FUN_00c0f450(*(undefined8 *)(param_1 + 0x100));
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),0);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),1);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),2);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),3);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),4);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),5);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),6);
  FUN_00c08ad0(*(undefined8 *)(param_1 + 0xe8),7);
  FUN_00bef860(*(undefined8 *)(param_1 + 0xb8));
  FUN_00bef860(*(undefined8 *)(param_1 + 0xe8));
  FUN_00bef860(*(undefined8 *)(param_1 + 0xe0));
  FUN_00bef860(*(undefined8 *)(param_1 + 0x100));
  FUN_00c02120(*(undefined8 *)(param_1 + 0xf0));
  FUN_00bef860(*(undefined8 *)(param_1 + 0xe8));
  FUN_00bfdd00(*(undefined8 *)(param_1 + 0x140));
  lVar1 = *(long *)(*(long *)(param_1 + 0x108) + 0x858);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  FUN_00c004b0(*(undefined8 *)(param_1 + 0x108),0);
  return;
}


