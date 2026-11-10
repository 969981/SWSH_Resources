/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061c710; name: FUN_0061c710
 */


void FUN_0061c710(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long local_1d8;
  undefined4 local_1cc;
  __jmp_buf_tag _Stack_1c8;
  int local_7c;
  uint local_78;
  undefined *local_70;
  undefined **local_68;
  undefined1 *local_60;
  long local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined1 *local_48;
  
  puVar7 = *(undefined1 **)(param_1 + 0x330);
  if (((puVar7 != (undefined1 *)0x0) &&
      (puVar1 = puVar7 + *(long *)(param_1 + 0x338), puVar7 + 4 <= puVar1)) &&
     (CONCAT11(*puVar7,puVar7[1]) == 0)) {
    uVar2 = (uint)CONCAT11(puVar7[2],puVar7[3]);
    puVar3 = puVar7 + 4;
    while ((uVar2 != 0 && (puVar3 + 8 <= puVar1))) {
      local_4c = CONCAT11(*puVar3,puVar3[1]);
      local_50 = 0;
      local_4a = CONCAT11(puVar3[2],puVar3[3]);
      local_48 = puVar3 + 8;
      uVar5 = (ulong)(byte)puVar3[4] << 0x18 | (ulong)(byte)puVar3[5] << 0x10 |
              (ulong)(byte)puVar3[6] << 8 | (ulong)(byte)puVar3[7];
      if (((int)uVar5 != 0) && (uVar5 <= *(long *)(param_1 + 0x338) - 2U)) {
        local_60 = puVar7 + uVar5;
        local_68 = &PTR_DAT_02600ad8;
        puVar6 = PTR_DAT_02600ad8;
        while (puVar6 != (undefined *)0x0) {
          local_70 = *local_68;
          if (*(uint *)(local_70 + 0x50) == (uint)CONCAT11(*local_60,local_60[1])) {
            local_1cc = 0;
            local_58 = param_1;
            FUN_006032e0(&_Stack_1c8,local_60,puVar1,0);
            local_78 = (uint)*(ushort *)(param_1 + 0x1d0);
            iVar4 = setjmp(&_Stack_1c8);
            if (iVar4 == 0) {
              local_1cc = (**(code **)(local_70 + 0x58))(local_60,&_Stack_1c8);
            }
            if ((local_7c == 0) &&
               (iVar4 = FUN_00605150(local_70,local_60,&local_58,&local_1d8), iVar4 == 0)) {
              *(undefined4 *)(local_1d8 + 0x20) = local_1cc;
            }
            break;
          }
          local_68 = local_68 + 1;
          puVar6 = *local_68;
        }
      }
      uVar2 = uVar2 - 1;
      puVar3 = local_48;
    }
  }
  return;
}


