/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00410790; name: FUN_00410790
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_00410790(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  plVar13 = param_1 + 0x13;
  puVar5 = (undefined8 *)*plVar13;
  if (puVar5 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar6 = puVar5;
    puVar10 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    while( true ) {
      puVar7 = puVar6;
      puVar9 = (undefined8 *)*puVar5;
      param_1[0x13] = (long)puVar9;
      if ((undefined8 *)param_1[0x12] == puVar7) {
        param_1[0x12] = 0;
        *puVar7 = 0;
      }
      else {
        *puVar7 = 0;
      }
      puVar12 = puVar5;
      if (puVar11 != (undefined8 *)0x0) {
        *puVar10 = puVar7;
        puVar12 = puVar11;
      }
      if (puVar9 == (undefined8 *)0x0) break;
      puVar5 = puVar9;
      puVar6 = (undefined8 *)*plVar13;
      puVar10 = puVar7;
      puVar11 = puVar12;
      if ((undefined8 *)*plVar13 != puVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00410b00(param_1);
    lVar4 = FUN_00410bb0(param_1,uVar2);
    puVar1 = (undefined4 *)PTR_DAT_02712a90;
  }
  else {
    lVar4 = FUN_00410bb0(param_1,0);
    puVar1 = (undefined4 *)PTR_DAT_02712a90;
  }
  PTR_DAT_02712a90 = (undefined *)puVar1;
  if ((lVar4 != 0) &&
     (puVar5 = (undefined8 *)FUN_00404690(*puVar1,0x58), puVar5 != (undefined8 *)0x0)) {
    *puVar5 = 0;
    puVar5[1] = lVar4;
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    puVar5[8] = 0x400000000;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    *puVar5 = 0;
    *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xf8;
    if (*plVar13 == 0) {
      *plVar13 = (long)puVar5;
      puVar6 = puVar5;
    }
    else {
      *(undefined8 **)param_1[0x12] = puVar5;
      puVar6 = (undefined8 *)param_1[0x13];
    }
    param_1[0x12] = (long)puVar5;
    param_1[0x14] = (long)puVar6;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    iVar3 = (**(code **)(*param_1 + 0x90))(param_1,0,&local_50,auStack_34,auStack_38,0,0);
    if (iVar3 != 0) {
      while (puVar12 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar12;
        *(byte *)(puVar12 + 10) = *(byte *)(puVar12 + 10) & 0xfc;
        FUN_00409430(puVar12[1]);
        uVar2 = *puVar1;
        lVar4 = puVar12[1];
        puVar12[1] = 0;
        if ((lVar4 != 0) && (FUN_00408b50(), puVar12[1] != 0)) {
          FUN_00408b50();
          puVar12[1] = 0;
        }
        FUN_00404870(uVar2,puVar12);
        puVar12 = puVar5;
      }
      return 1;
    }
  }
  while (puVar12 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar12;
    *puVar12 = 0;
    plVar8 = plVar13;
    if (*plVar13 != 0) {
      plVar8 = (long *)param_1[0x12];
    }
    *plVar8 = (long)puVar12;
    param_1[0x12] = (long)puVar12;
    puVar12 = puVar5;
  }
  return 2;
}


