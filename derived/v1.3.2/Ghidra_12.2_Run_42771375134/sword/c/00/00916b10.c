/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00916b10; name: FUN_00916b10
 */


void FUN_00916b10(undefined8 param_1,ushort param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_280 [128];
  undefined4 *puVar6;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_2 < 0xbe) {
    bVar1 = (&DAT_0214a848)[param_2];
    uVar2 = 9;
    if ((bVar1 != 0x10) && (bVar1 != 0x20)) {
      uVar2 = (ulong)(bVar1 & 0xf);
    }
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    if ((int)uVar2 != 0) {
      local_68 = -0x30;
      puVar3 = &local_60;
      puVar6 = (undefined4 *)register0x00000008;
      do {
        if (local_68 < 0) {
          iVar4 = local_68 + 8;
          if (0 < iVar4) goto LAB_00916be4;
          puVar5 = (undefined4 *)((long)auStack_280 + (long)local_68 + 0x200);
          local_68 = iVar4;
        }
        else {
          iVar4 = local_68;
LAB_00916be4:
          puVar5 = puVar6;
          local_68 = iVar4;
          puVar6 = puVar6 + 2;
        }
        uVar2 = uVar2 - 1;
        *(undefined4 *)puVar3 = *puVar5;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
      } while (uVar2 != 0);
    }
    FUN_00916c20();
  }
  return;
}


