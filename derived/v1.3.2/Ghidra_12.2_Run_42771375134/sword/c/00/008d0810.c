/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d0810; name: FUN_008d0810
 */


void FUN_008d0810(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = FUN_0167b6b0(*(undefined8 *)(lVar3 + 0x1b0));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_0103bd80(*(undefined8 *)(lVar3 + 0x1b0),param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar3 + 1000) + (ulong)*(uint *)(param_2 + 0x18) * 0x3d0;
  *(long *)(param_1 + 0x28) = lVar3;
  uVar2 = FUN_00ff93d0(param_1);
  FUN_0168b110(lVar3,uVar2,uVar1,0);
  *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x3c1) = 1;
  *(byte *)(*(long *)(param_1 + 0x18) + 0x58) = *(byte *)(*(long *)(param_1 + 0x18) + 0x58) & 0xfe;
  return;
}


