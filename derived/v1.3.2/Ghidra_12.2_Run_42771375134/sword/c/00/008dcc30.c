/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dcc30; name: FUN_008dcc30
 */


void FUN_008dcc30(long param_1,long param_2)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = -0x1600;
  *(undefined8 *)(param_1 + 0x1610) = 0;
  *(undefined8 *)(param_1 + 0x1608) = 0;
  do {
    uVar3 = *(undefined8 *)(param_1 + lVar5 + 0x1608);
    FUN_008db970(uVar3);
    FUN_008db7d0(uVar3);
    FUN_008db960(uVar3,*(undefined8 *)(param_1 + 0x1610));
    lVar5 = lVar5 + 0x20;
    *(undefined8 *)(param_1 + 0x1610) = uVar3;
  } while (lVar5 != 0);
  lVar5 = -0x1600;
  do {
    FUN_008db810(*(undefined8 *)(param_1 + lVar5 + 0x1608),*(undefined8 *)(param_2 + lVar5 + 0x1608)
                );
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0);
  lVar5 = *(long *)(param_2 + 0x1608);
joined_r0x008dccac:
  do {
    if (lVar5 == 0) {
      return;
    }
    sVar1 = FUN_008db840(lVar5);
    for (lVar4 = *(long *)(param_1 + 0x1610); lVar4 != 0; lVar4 = FUN_008db990(lVar4)) {
      sVar2 = FUN_008db840(lVar4);
      if (sVar2 == sVar1) {
        if (*(long *)(param_1 + 0x1610) == lVar4) {
          uVar3 = FUN_008db990(lVar4);
          *(undefined8 *)(param_1 + 0x1610) = uVar3;
        }
        FUN_008db970(lVar4);
        FUN_008dcd50(param_1,lVar4);
        lVar5 = FUN_008db990(lVar5);
        goto joined_r0x008dccac;
      }
    }
    lVar5 = FUN_008db990(lVar5);
  } while( true );
}


