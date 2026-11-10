/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bfc00; name: FUN_014bfc00
 */


void FUN_014bfc00(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  plVar2 = (long *)FUN_019cc190(param_2);
  iVar1 = (**(code **)(*plVar2 + 0x20))();
  lVar3 = FUN_019c1410(param_2,&DAT_01d0b576);
  if ((lVar3 == 0) && (lVar3 = FUN_019c1410(param_2,"g2d_fw"), lVar3 == 0)) {
    fVar6 = (float)iVar1;
  }
  else {
    fVar6 = *(float *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
  }
  if ((param_2 != 0) && (lVar3 = FUN_019c1410(param_2,&DAT_01d07b51), lVar3 == 0)) {
    FUN_019c1410(param_2,"no_short");
  }
  uVar4 = FUN_019cc190(param_2);
  uVar5 = FUN_0077d470(param_1);
  FUN_014bf990(fVar6,uVar5,uVar4,0);
  return;
}


