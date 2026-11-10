/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01127f10; name: FUN_01127f10
 */


void FUN_01127f10(void)

{
  long lVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined2 uStack_3a;
  
  lVar1 = *(long *)PTR_DAT_02710958;
  if (lVar1 != 0) {
    local_48 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    uStack_3a = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    uStack_4a = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_01222660(&local_70);
    local_4c = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    local_48 = 0;
    uStack_42 = 0;
    FUN_012115f0(lVar1,&local_70);
  }
  lVar1 = *(long *)PTR_DAT_027108d8;
  if (lVar1 != 0) {
    FUN_0121b630(&local_70,0xff);
    FUN_010a1250(lVar1,&local_70);
  }
  return;
}


