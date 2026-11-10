/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a9540; name: FUN_013a9540
 */


void FUN_013a9540(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_58 [4];
  uint local_48 [6];
  
  uVar7 = *(undefined8 *)PTR_DAT_027104a0;
  FUN_007a83f0(uVar7);
  lVar4 = FUN_018666b0();
  *(long *)(param_1 + 0x78) = lVar4;
  if (lVar4 == -1) {
    local_58[0] = 0x2c27;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_018724d0((ulong)local_48 | 4,local_58);
    local_48[0] = CONCAT31(local_48[0]._1_3_,1);
    FUN_007a8040(uVar7,local_48);
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = *param_2;
    uVar7 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[4];
    *(undefined8 *)(param_1 + 0xa0) = param_2[3];
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    if ((((*(long **)(param_1 + 0x80) == (long *)0x0) ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x80) + 8))(), (uVar5 & 1) == 0)) &&
        (*(char *)(param_1 + 0x70) == '\0')) ||
       (puVar6 = *(undefined8 **)(param_1 + 0x80), puVar6 == (undefined8 *)0x0)) {
      bVar3 = 1;
    }
    else {
      bVar3 = (**(code **)*puVar6)
                        (puVar6,(undefined8 *)(param_1 + 0x88),0x28,*(undefined8 *)(param_1 + 0x78),
                         *(undefined2 *)(param_1 + 0x62),*(undefined8 *)(param_1 + 0x68));
      bVar3 = ~bVar3 & 1;
    }
    *(byte *)(param_1 + 0x60) = bVar3;
  }
  return;
}


