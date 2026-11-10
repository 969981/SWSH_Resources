/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056ed30; name: FUN_0056ed30
 */


void FUN_0056ed30(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)((uint)(param_2 >> 1) & 0x7fffffff);
  dVar3 = log(dVar6);
  dVar5 = DAT_01cd5460;
  dVar3 = dVar3 / DAT_01cd5460;
  iVar1 = (int)(dVar3 + 1.0);
  if (dVar3 == (double)(int)dVar3) {
    iVar1 = (int)dVar3;
  }
  dVar3 = ldexp(1.0,iVar1);
  uVar2 = (uint)(int)dVar3 >> 3;
  if (uVar2 < 0x81) {
    uVar2 = 0x80;
  }
  dVar4 = log((double)(int)((param_3 & 0xffffffff) >> 1));
  dVar4 = dVar4 / dVar5;
  iVar1 = (int)(dVar4 + 1.0);
  if (dVar4 == (double)(int)dVar4) {
    iVar1 = (int)dVar4;
  }
  dVar4 = ldexp(1.0,iVar1);
  dVar6 = log(dVar6);
  dVar6 = dVar6 / dVar5;
  iVar1 = (int)(dVar6 + 1.0);
  if (dVar6 == (double)(int)dVar6) {
    iVar1 = (int)dVar6;
  }
  dVar5 = ldexp(1.0,iVar1);
  iVar1 = FUN_0056e410(param_1,(int)dVar3,uVar2,10);
  if ((iVar1 < 0) || (iVar1 = FUN_0056e7f0(param_1,(int)dVar4,(int)dVar4,10), iVar1 < 0)) {
    return;
  }
  FUN_0056eb30(param_1,(int)dVar5,(int)dVar5);
  return;
}


