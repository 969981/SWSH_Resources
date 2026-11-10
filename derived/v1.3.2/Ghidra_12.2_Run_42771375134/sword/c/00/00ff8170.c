/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8170; name: FUN_00ff8170
 */


undefined8 FUN_00ff8170(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  uVar8 = (ulong)*(uint *)(param_1 + 0xc90);
  if (*(uint *)(param_1 + 0xc90) != 0) {
    plVar9 = (long *)(param_1 + 0x98);
    bVar4 = true;
    do {
      bVar7 = false;
      if (*plVar9 != 0) {
        bVar7 = *(char *)(*plVar9 + 0x170) != '\0';
      }
      bVar4 = (bool)(bVar4 & bVar7);
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 0x32;
    } while (uVar8 != 0);
    if (!bVar4) {
      return 0;
    }
  }
  puVar10 = (undefined8 *)(param_1 + 0xa0);
  puVar1 = PTR_DAT_02723390 + 0x10;
  puVar2 = PTR_DAT_027176d8 + 0x10;
  do {
    local_178 = puVar10[-1];
    local_180 = puVar1;
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
    }
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    if ((code *)puVar10[2] != (code *)0x0) {
      (*(code *)puVar10[2])(puVar10 + 4,auStack_150);
      local_170 = *puVar10;
      local_168 = (code *)puVar10[1];
      local_160 = puVar10[2];
      uStack_158 = puVar10[3];
    }
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if ((code *)puVar10[0x12] != (code *)0x0) {
      (*(code *)puVar10[0x12])(puVar10 + 0x14,auStack_d0);
      local_f0 = puVar10[0x10];
      local_e8 = (code *)puVar10[0x11];
      local_e0 = puVar10[0x12];
      uStack_d8 = puVar10[0x13];
    }
    if (local_178 == 0) {
LAB_00ff8384:
      local_180 = PTR_DAT_02723390 + 0x10;
LAB_00ff8394:
      local_178 = 0;
      pcVar5 = local_e8;
    }
    else {
      local_180 = puVar2;
      FUN_006e2100(local_178,&local_180);
      lVar6 = local_178;
      local_178 = 0;
      if (lVar6 == 0) goto LAB_00ff8384;
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      local_180 = PTR_DAT_02723390 + 0x10;
      if (local_178 != 0) {
        FUN_006e2100(local_178,&local_180);
        lVar6 = local_178;
        local_178 = 0;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
          pcVar5 = local_e8;
          goto joined_r0x00ff8210;
        }
        goto LAB_00ff8394;
      }
      local_178 = 0;
      pcVar5 = local_e8;
    }
joined_r0x00ff8210:
    local_e8 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar5)(auStack_d0);
    }
    pcVar5 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar5)(auStack_150);
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    }
    puVar3 = puVar10 + 0x20;
    puVar10 = puVar10 + 0x32;
    if (puVar3 == (undefined8 *)(param_1 + 0xc90)) {
      *(undefined4 *)(param_1 + 0xc90) = 0;
      return 1;
    }
  } while( true );
}


