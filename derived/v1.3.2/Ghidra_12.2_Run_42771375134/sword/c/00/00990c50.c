/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00990c50; name: FUN_00990c50
 */


void FUN_00990c50(undefined8 param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  undefined1 auStack_68 [40];
  
  lVar4 = FUN_0093ec60();
  sVar2 = FUN_008e1290();
  if ((sVar2 == 0x15f) && (uVar5 = FUN_008e1570(lVar4), (uVar5 & 1) == 0)) {
    bVar1 = *(byte *)(lVar4 + 0x33d);
    iVar3 = FUN_0093fa30(param_1,param_2);
    uVar6 = (uint)(0x10200030201 >> (((ulong)(iVar3 - 1U) & 7) << 3));
    if (5 < (iVar3 - 1U & 0xff)) {
      uVar6 = 0;
    }
    if ((uVar6 & 0xff) != (uint)bVar1) {
      local_70 = 0x1f;
      local_6b = 1;
      local_6f = 0;
      FUN_00943e60(auStack_68);
      local_70 = (undefined1)param_2;
      local_6f = CONCAT31(local_6f._1_3_,(char)uVar6);
      local_6f = CONCAT13(1,(undefined3)local_6f);
      FUN_00943f20(auStack_68,2,0x130);
      FUN_00943f60(auStack_68,param_2 & 0xff);
      FUN_00940150(param_1,&local_70);
    }
  }
  return;
}


