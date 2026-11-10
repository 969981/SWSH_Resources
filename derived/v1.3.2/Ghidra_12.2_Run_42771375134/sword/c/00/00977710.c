/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00977710; name: FUN_00977710
 */


void FUN_00977710(undefined8 param_1,undefined1 param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 auStack_84 [36];
  
  iVar3 = FUN_0093eb90(param_1,5);
  if (0 < iVar3) {
    uVar8 = 0;
    uVar6 = (ulong)&local_90 | 4;
    do {
      while( true ) {
        uVar7 = (uint)uVar8;
        uVar4 = FUN_0093eb90(param_1,(uVar7 & 0xff) + 6);
        uVar5 = FUN_0093ec60(param_1,uVar4);
        if (*(char *)(param_3 + (uVar8 & 0xff)) == '\0') break;
        local_90 = 0x1f000000001f1f;
        local_88 = 0;
        FUN_00943e60(auStack_84);
        uVar1 = local_90;
        local_90._4_4_ = SUB84(uVar1,4);
        local_90._0_4_ = (uint)CONCAT11((char)uVar4,param_2);
        FUN_00943f20(auStack_84,2,0x7e6);
        FUN_00943f60(auStack_84,param_2);
        FUN_00943f60(auStack_84,uVar4 & 0xff);
        uVar2 = FUN_008e2d10(uVar5);
        FUN_00943f60(auStack_84,uVar2);
        FUN_0093fbf0(param_1,&local_90);
        uVar8 = (ulong)(uVar7 + 1);
        if (iVar3 <= (int)(uVar7 + 1 & 0xff)) {
          return;
        }
      }
      local_90 = CONCAT62(local_90._2_6_,0x1f);
      FUN_00943e60(uVar6);
      local_90 = CONCAT71(local_90._1_7_,param_2);
      FUN_00943f20(uVar6,2,0x800);
      FUN_00943f60(uVar6,uVar4 & 0xff);
      FUN_0093f640(param_1,&local_90);
      uVar8 = (ulong)(uVar7 + 1);
    } while ((int)(uVar7 + 1 & 0xff) < iVar3);
  }
  return;
}


