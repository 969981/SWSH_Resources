/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbd320; name: FUN_00dbd320
 */


void FUN_00dbd320(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  code *local_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined1 auStack_d0 [112];
  
  lVar4 = *(long *)(param_1 + 0x458);
  lVar6 = *(long *)(param_1 + 0x460);
  if (lVar4 != lVar6) {
    uVar5 = *(undefined8 *)PTR_DAT_0271e8f8;
    puVar1 = PTR_DAT_027164e0 + 0x10;
    do {
      FUN_00dc1880(&local_180,uVar5,lVar4,param_2,param_3 & 1);
      if (*(long *)(lVar4 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      lVar2 = local_178;
      local_178 = 0;
      *(long *)(lVar4 + 0x18) = lVar2;
      pcVar3 = *(code **)(lVar4 + 0x28);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        (*pcVar3)(lVar4 + 0x40);
      }
      if (local_158 != (code *)0x0) {
        (*local_158)(auStack_150,lVar4 + 0x40);
        pcVar3 = local_168;
        *(code **)(lVar4 + 0x38) = local_158;
        *(undefined8 *)(lVar4 + 0x20) = local_170;
        *(code **)(lVar4 + 0x28) = local_168;
        *(undefined8 *)(lVar4 + 0x30) = local_160;
        if (local_168 != (code *)0x0) {
          local_160 = 0;
          local_158 = (code *)0x0;
          local_170 = 0;
          local_168 = (code *)0x0;
          (*pcVar3)(auStack_150);
        }
      }
      pcVar3 = *(code **)(lVar4 + 0xa8);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0xb0) = 0;
        *(undefined8 *)(lVar4 + 0xb8) = 0;
        *(undefined8 *)(lVar4 + 0xa0) = 0;
        *(undefined8 *)(lVar4 + 0xa8) = 0;
        (*pcVar3)(lVar4 + 0xc0);
      }
      if (local_d8 != (code *)0x0) {
        (*local_d8)(auStack_d0,lVar4 + 0xc0);
        pcVar3 = local_e8;
        *(code **)(lVar4 + 0xb8) = local_d8;
        *(undefined8 *)(lVar4 + 0xa0) = local_f0;
        *(code **)(lVar4 + 0xa8) = local_e8;
        *(undefined8 *)(lVar4 + 0xb0) = local_e0;
        if (local_e8 != (code *)0x0) {
          local_e0 = 0;
          local_d8 = (code *)0x0;
          local_f0 = 0;
          local_e8 = (code *)0x0;
          (*pcVar3)(auStack_d0);
        }
      }
      local_180 = puVar1;
      if (local_178 == 0) {
        local_178 = 0;
        pcVar3 = local_e8;
      }
      else {
        FUN_006e2100(local_178,&local_180);
        lVar2 = local_178;
        local_178 = 0;
        pcVar3 = local_e8;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
          pcVar3 = local_e8;
        }
      }
      local_e8 = pcVar3;
      if (pcVar3 != (code *)0x0) {
        local_e0 = 0;
        local_d8 = (code *)0x0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar3)(auStack_d0);
      }
      pcVar3 = local_168;
      if (local_168 != (code *)0x0) {
        local_160 = 0;
        local_158 = (code *)0x0;
        local_170 = 0;
        local_168 = (code *)0x0;
        (*pcVar3)(auStack_150);
      }
      if (local_178 != 0) {
        (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
        local_178 = 0;
      }
      lVar4 = lVar4 + 0x180;
    } while (lVar6 != lVar4);
  }
  return;
}


