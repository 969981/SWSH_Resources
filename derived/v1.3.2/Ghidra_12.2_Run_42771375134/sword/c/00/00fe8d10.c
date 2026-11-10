/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe8d10; name: FUN_00fe8d10
 */


void FUN_00fe8d10(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_68;
  long local_60;
  undefined1 local_58;
  undefined1 uStack_57;
  
  lVar5 = 0;
  lVar1 = param_1 + 0x100;
  lVar6 = 0xd;
  puVar4 = &DAT_02667858;
  do {
    puVar2 = (undefined1 *)(*param_2 + lVar6);
    local_68 = *(undefined8 *)(puVar2 + -0xd);
    local_60 = param_2[1];
    _local_58 = CONCAT11(*puVar2,puVar2[-1]);
    FUN_00fe97b0(*(long *)(param_1 + 0x5d0) + lVar5,&local_68);
    uVar7 = NEON_ucvtf(*(undefined4 *)(puVar2 + -5));
    FUN_00ffd510(uVar7,lVar1,puVar4);
    if (puVar2[-1] == '\0') {
      FUN_00ffd430(lVar1,puVar4 + 0x10);
      puVar3 = puVar4 + 8;
    }
    else {
      FUN_00ffd430(lVar1,puVar4 + 8);
      puVar3 = puVar4 + 0x10;
    }
    FUN_00ffd010(lVar1,puVar3);
    lVar6 = lVar6 + 0x10;
    puVar4 = puVar4 + 0x18;
    lVar5 = lVar5 + 0x48;
  } while (lVar6 != 0x8d);
  if ((char)param_2[2] != '\0') {
    FUN_00ffd010(lVar1,&DAT_021623e0);
    FUN_00ffd010(lVar1,&DAT_021623e8);
  }
  return;
}


