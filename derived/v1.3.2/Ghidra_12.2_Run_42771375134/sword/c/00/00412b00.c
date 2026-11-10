/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00412b00; name: FUN_00412b00
 */


undefined8
FUN_00412b00(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_174 [4];
  undefined1 auStack_170 [304];
  undefined8 local_38;
  
  *param_5 = 0;
  uVar1 = *param_4;
  *param_4 = uVar1 + 1;
  if (uVar1 + 1 < 0x41) {
    lVar3 = FUN_004188e0(param_2,&local_38);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar3 + 0x10);
    }
    FUN_00418860(auStack_170,param_3,1);
    lVar3 = FUN_004188e0(auStack_170,param_5);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(lVar3 + 0x10);
    }
    uVar2 = FUN_00415b30(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x78),uVar5,
                         local_38,uVar4,*param_5,auStack_174);
    FUN_004188d0(auStack_170);
  }
  else {
    uVar2 = FUN_00415e10();
  }
  return uVar2;
}


