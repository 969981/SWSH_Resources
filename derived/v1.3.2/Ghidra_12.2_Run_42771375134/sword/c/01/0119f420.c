/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119f420; name: FUN_0119f420
 */


void FUN_0119f420(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_58 [4];
  uint local_48 [6];
  
  uVar5 = *(undefined8 *)PTR_DAT_027104a0;
  FUN_007a83f0(uVar5);
  lVar2 = FUN_018666b0();
  *(long *)(param_1 + 0x78) = lVar2;
  if (lVar2 == -1) {
    local_58[0] = 0x2c27;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_018724d0((ulong)local_48 | 4,local_58);
    local_48[0] = CONCAT31(local_48[0]._1_3_,1);
    FUN_007a8040(uVar5,local_48);
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = *param_2;
    if ((((*(long **)(param_1 + 0x80) == (long *)0x0) ||
         (uVar3 = (**(code **)(**(long **)(param_1 + 0x80) + 8))(), (uVar3 & 1) == 0)) &&
        (*(char *)(param_1 + 0x70) == '\0')) ||
       (puVar4 = *(undefined8 **)(param_1 + 0x80), puVar4 == (undefined8 *)0x0)) {
      bVar1 = 1;
    }
    else {
      bVar1 = (**(code **)*puVar4)
                        (puVar4,(undefined8 *)(param_1 + 0x88),8,*(undefined8 *)(param_1 + 0x78),
                         *(undefined2 *)(param_1 + 0x62),*(undefined8 *)(param_1 + 0x68));
      bVar1 = ~bVar1 & 1;
    }
    *(byte *)(param_1 + 0x60) = bVar1;
  }
  return;
}


