/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00879180; name: FUN_00879180
 */


void FUN_00879180(long param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (0x1e < param_3) {
    param_3 = 0x1f;
  }
  switch(param_2) {
  case 0:
    FUN_00871140(*(undefined8 *)(param_1 + 0x98));
    FUN_008793d0(param_1,1);
    return;
  case 1:
    FUN_00871290(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) == 0)) ||
       (cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98)), 1 < (byte)(cVar1 - 1U))) {
      uVar2 = FUN_00879aa0(param_1);
    }
    else {
      uVar2 = FUN_0087a0f0(param_1);
    }
    FUN_0086f190(*(undefined8 *)(param_1 + 0x98),uVar2);
    return;
  case 2:
    FUN_008713e0(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) == 0)) ||
       (cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98)), 1 < (byte)(cVar1 - 1U))) {
      uVar2 = FUN_00879b90(param_1);
    }
    else {
      uVar2 = FUN_0087a1f0(param_1);
    }
    FUN_0086f2c0(*(undefined8 *)(param_1 + 0x98),uVar2);
    return;
  case 3:
    FUN_00871530(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) == 0)) ||
       (cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98)), 1 < (byte)(cVar1 - 1U))) {
      uVar2 = FUN_00879c80(param_1);
    }
    else {
      uVar2 = FUN_0087a2f0(param_1);
    }
    FUN_0086f3f0(*(undefined8 *)(param_1 + 0x98),uVar2);
    return;
  case 4:
    FUN_00871680(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) == 0)) ||
       (cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98)), 1 < (byte)(cVar1 - 1U))) {
      uVar2 = FUN_00879d70(param_1);
    }
    else {
      uVar2 = FUN_0087a3f0(param_1);
    }
    FUN_0086f520(*(undefined8 *)(param_1 + 0x98),uVar2);
    return;
  case 5:
    FUN_008717d0(*(undefined8 *)(param_1 + 0x98),param_3);
    uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98)), (uVar3 & 1) == 0)) ||
       (cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98)), 1 < (byte)(cVar1 - 1U))) {
      uVar2 = FUN_00879e60(param_1);
    }
    else {
      uVar2 = FUN_0087a4f0(param_1);
    }
    FUN_0086f650(*(undefined8 *)(param_1 + 0x98),uVar2);
    return;
  default:
    return;
  }
}


