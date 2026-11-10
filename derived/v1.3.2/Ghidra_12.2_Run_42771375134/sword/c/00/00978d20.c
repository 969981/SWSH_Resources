/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00978d20; name: FUN_00978d20
 */


void FUN_00978d20(long param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 local_78;
  undefined1 uStack_77;
  byte abStack_76 [38];
  
  uVar2 = FUN_0093eb90(param_1,3);
  if (uVar2 != (param_2 & 0xff)) {
    return;
  }
  uVar3 = FUN_0093eb90(param_1,4);
  uVar4 = FUN_0093ec60(param_1,uVar3);
  uVar3 = FUN_0093ed30(param_1,uVar3);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  uVar5 = FUN_0096c8e0(*puVar7,uVar3,0);
  if (((((((uVar5 & 1) == 0) || (uVar5 = FUN_008dd460(0), (uVar5 & 1) == 0)) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,1), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(1), (uVar5 & 1) == 0)))) &&
       ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,2), (uVar5 & 1) == 0 ||
        (uVar5 = FUN_008dd460(2), (uVar5 & 1) == 0)))) &&
      (((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,3), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(3), (uVar5 & 1) == 0)) &&
         ((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,4), (uVar5 & 1) == 0 ||
            (uVar5 = FUN_008dd460(4), (uVar5 & 1) == 0)) &&
           ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,5), (uVar5 & 1) == 0 ||
            (uVar5 = FUN_008dd460(5), (uVar5 & 1) == 0)))) &&
          ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,6), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(6), (uVar5 & 1) == 0)))))) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,7), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(7), (uVar5 & 1) == 0)))) &&
       ((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,8), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(8), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,9), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(9), (uVar5 & 1) == 0)))) &&
        (((uVar5 = FUN_0096c8e0(*puVar7,uVar3,10), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(10), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xb), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(0xb), (uVar5 & 1) == 0)))))))))) &&
     ((((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xc), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(0xc), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xd), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(0xd), (uVar5 & 1) == 0)))) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xe), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(0xe), (uVar5 & 1) == 0)))) &&
       ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xf), (uVar5 & 1) == 0 ||
        (uVar5 = FUN_008dd460(0xf), (uVar5 & 1) == 0)))) &&
      ((((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x10), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(0x10), (uVar5 & 1) == 0)) &&
          ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x11), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(0x11), (uVar5 & 1) == 0)))) &&
         (((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x12), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(0x12), (uVar5 & 1) == 0)) &&
          ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x13), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(0x13), (uVar5 & 1) == 0)))))) &&
        ((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x14), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(0x14), (uVar5 & 1) == 0)) &&
          ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x15), (uVar5 & 1) == 0 ||
           (uVar5 = FUN_008dd460(0x15), (uVar5 & 1) == 0)))) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x16), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(0x16), (uVar5 & 1) == 0)))))) &&
       ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x17), (uVar5 & 1) == 0 ||
        (uVar5 = FUN_008dd460(0x17), (uVar5 & 1) == 0)))))))) {
    uVar5 = FUN_008e2df0(uVar4,7);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  else {
    FUN_008e2df0(uVar4,7);
  }
  uVar2 = FUN_008e0a00(uVar4,param_2,uVar4,param_3);
  uVar3 = FUN_0093ed30(param_1,uVar2);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  uVar5 = FUN_0096c8e0(*puVar7,uVar3,0);
  if ((((((((uVar5 & 1) == 0) || (uVar5 = FUN_008dd460(0), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,1), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(1), (uVar5 & 1) == 0)))) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,2), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(2), (uVar5 & 1) == 0)))) &&
       ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,3), (uVar5 & 1) == 0 ||
        (uVar5 = FUN_008dd460(3), (uVar5 & 1) == 0)))) &&
      (((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,4), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(4), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,5), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(5), (uVar5 & 1) == 0)))) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,6), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(6), (uVar5 & 1) == 0)))) &&
       (((uVar5 = FUN_0096c8e0(*puVar7,uVar3,7), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(7), (uVar5 & 1) == 0)) &&
        (((uVar5 = FUN_0096c8e0(*puVar7,uVar3,8), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(8), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,9), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(9), (uVar5 & 1) == 0)))))))))) &&
     (((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,10), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(10), (uVar5 & 1) == 0)) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xb), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(0xb), (uVar5 & 1) == 0)))) &&
       ((((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xc), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(0xc), (uVar5 & 1) == 0)) &&
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xd), (uVar5 & 1) == 0 ||
          (uVar5 = FUN_008dd460(0xd), (uVar5 & 1) == 0)))) &&
        ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xe), (uVar5 & 1) == 0 ||
         (uVar5 = FUN_008dd460(0xe), (uVar5 & 1) == 0)))))) &&
      ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0xf), (uVar5 & 1) == 0 ||
       (uVar5 = FUN_008dd460(0xf), (uVar5 & 1) == 0)))))) {
    uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x10);
    if ((uVar5 & 1) != 0) {
      FUN_008dd460(0x10);
    }
    uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x11);
    if (((((((uVar5 & 1) != 0) && (uVar5 = FUN_008dd460(0x11), (uVar5 & 1) != 0)) ||
          ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x12), (uVar5 & 1) != 0 &&
           (uVar5 = FUN_008dd460(0x12), (uVar5 & 1) != 0)))) ||
         ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x13), (uVar5 & 1) != 0 &&
          (uVar5 = FUN_008dd460(0x13), (uVar5 & 1) != 0)))) ||
        (((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x14), (uVar5 & 1) != 0 &&
          (uVar5 = FUN_008dd460(0x14), (uVar5 & 1) != 0)) ||
         (((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x15), (uVar5 & 1) != 0 &&
           (uVar5 = FUN_008dd460(0x15), (uVar5 & 1) != 0)) ||
          ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x16), (uVar5 & 1) != 0 &&
           (uVar5 = FUN_008dd460(0x16), (uVar5 & 1) != 0)))))))) ||
       ((uVar5 = FUN_0096c8e0(*puVar7,uVar3,0x17), (uVar5 & 1) != 0 &&
        (uVar5 = FUN_008dd460(0x17), (uVar5 & 1) != 0)))) goto LAB_00979428;
    uVar5 = FUN_008e2df0(uVar4,7);
    if ((uVar5 & 1) == 0) goto LAB_00979464;
  }
  else {
LAB_00979428:
    FUN_008e2df0(uVar4,7);
  }
  abStack_76[2] = 7;
  abStack_76[3] = 0;
  abStack_76[4] = 0;
  abStack_76[5] = 0;
  local_78 = (char)uVar2;
  FUN_0093f6b0(param_1,&local_78);
  uStack_77 = 3;
  abStack_76[0] = 0;
  local_78 = (char)uVar2;
  FUN_0093fd90(param_1,&local_78);
LAB_00979464:
  uVar5 = (ulong)&local_78 | 4;
  local_78 = 0x1f;
  uStack_77 = 0;
  FUN_00943e60(uVar5);
  local_78 = (char)param_2;
  FUN_00943f20(uVar5,2,param_3);
  FUN_00943f60(uVar5,uVar2 & 0xff);
  FUN_0093f640(param_1,&local_78);
  abStack_76[4] = 0;
  abStack_76[0] = 4;
  abStack_76[1] = 0;
  abStack_76[2] = 0;
  abStack_76[3] = 0;
  local_78 = (char)param_2;
  uVar3 = FUN_008e0a00(uVar4);
  uStack_77 = FUN_0093ed30(param_1,uVar3);
  uVar5 = 0;
  abStack_76[3] = 0;
  abStack_76[1] = 0;
  abStack_76[2] = 0;
  do {
    uVar6 = FUN_008dd460(uVar5);
    if (((uVar6 & 1) != 0) && (uVar2 = (int)(uVar5 >> 3) + 1, (uVar2 & 0xff) < (uint)abStack_76[0]))
    {
      bVar1 = (byte)uVar2;
      abStack_76[bVar1] = abStack_76[bVar1] | (byte)(1 << (ulong)((uint)uVar5 & 7));
    }
    uVar2 = (uint)uVar5 + 1;
    uVar5 = (ulong)uVar2;
  } while (uVar2 != 0x18);
  FUN_0093f7e0(param_1,&local_78);
  return;
}


