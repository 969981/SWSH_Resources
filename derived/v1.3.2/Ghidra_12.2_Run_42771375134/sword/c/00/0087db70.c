/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087db70; name: FUN_0087db70
 */


bool FUN_0087db70(long param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  lVar3 = FUN_00866030();
  iVar2 = FUN_00883990(*(undefined8 *)(lVar3 + 0x270),param_1,param_2,param_4);
  *param_3 = iVar2;
  return iVar1 != iVar2;
}


