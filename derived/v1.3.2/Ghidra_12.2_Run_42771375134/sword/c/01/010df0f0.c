/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010df0f0; name: FUN_010df0f0
 */


undefined8 FUN_010df0f0(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar2 = FUN_010dc700(*(undefined8 *)(param_1 + 0x88));
  switch(uVar2) {
  case 1:
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar4 = FUN_010c8950();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar6 = puVar6 + -10;
          goto LAB_010df16c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_010df16c:
    FUN_010c6c30(puVar6,3);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    FUN_010dc510(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0xa4) = 2;
    break;
  case 2:
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_010df1d8:
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      if (puVar6 != (undefined8 *)0x0) {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar4 = FUN_010c8950();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            puVar6 = puVar6 + -10;
            goto LAB_010df1dc;
          }
        }
        goto LAB_010df1d8;
      }
    }
LAB_010df1dc:
    lVar4 = FUN_010c6c10(puVar6);
    bVar1 = *(byte *)(lVar4 + 0xbc);
    lVar4 = FUN_010c6c10(puVar6);
    *(byte *)(lVar4 + 0xbc) = bVar1 ^ 1;
    FUN_010dc5a0(*(undefined8 *)(param_1 + 0x88),bVar1 == 0);
    break;
  case 3:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    uVar5 = FUN_010dedc0(param_1);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(param_1 + 0xa4) = 6;
    }
    else {
      *(undefined8 *)(param_1 + 0xa4) = 4;
    }
    break;
  case 4:
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
    *(undefined8 *)(param_1 + 0xa4) = 5;
  }
  FUN_010dc490(*(undefined8 *)(param_1 + 0x88));
  return 0;
}


