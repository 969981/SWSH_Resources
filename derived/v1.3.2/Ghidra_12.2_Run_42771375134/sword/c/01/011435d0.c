/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011435d0; name: FUN_011435d0
 */


undefined8 FUN_011435d0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *param_1;
  *(undefined1 *)(lVar2 + 0x6e0) = 1;
  uVar1 = FUN_00ffdef0(lVar2 + 0x100,&DAT_021659b8);
  FUN_016b2da0(uVar1,*(byte *)(lVar2 + 0x6e1) & *(byte *)(lVar2 + 0x6e0) & *(byte *)(lVar2 + 0x6e2))
  ;
  uVar1 = FUN_00ffdd70(lVar2 + 0x100,&DAT_02165820);
  local_28 = FUN_016b8190();
  FUN_016b7990(uVar1,&local_28,1,0);
  return 1;
}


