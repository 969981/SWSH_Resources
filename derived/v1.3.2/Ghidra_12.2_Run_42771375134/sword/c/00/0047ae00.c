/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047ae00; name: FUN_0047ae00
 */


undefined8 FUN_0047ae00(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if ((*(char *)(param_1 + 0x124) != '\0') && (*(long *)(param_1 + 0x118) == 0)) {
      uStack_38 = *(undefined8 *)(param_1 + 0x10);
      local_40 = 0;
      lVar5 = FUN_004c69e0(&local_40);
      *(long *)(param_1 + 0x118) = lVar5;
      if (lVar5 == 0) {
        *param_2 = 1;
        puVar3 = PTR_DAT_02712e28;
        plVar6 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x358);
        *(long **)(param_1 + 0x118) = plVar6;
        lVar5 = 0;
        if (plVar6 != (long *)0x0) {
          FUN_004d1680(plVar6);
          puVar1 = PTR_DAT_027131f8 + 0x10;
          plVar6[0x18] = (long)(PTR_DAT_027131f8 + 0x168);
          *(undefined4 *)(plVar6 + 0x6a) = 0xffffffff;
          *plVar6 = (long)puVar1;
          *(byte *)((long)plVar6 + 0x354) = *(byte *)((long)plVar6 + 0x354) & 0xfc;
          lVar5 = *(long *)(param_1 + 0x118);
        }
        if (lVar5 == 0) {
          return 0;
        }
        iVar4 = FUN_004c74a0(lVar5,local_40,uStack_38,0);
        if (iVar4 != 1) {
          lVar5 = *(long *)(param_1 + 0x118);
          if (lVar5 != 0) {
            uVar2 = *(undefined4 *)puVar3;
            if (((*(long *)(lVar5 + 0x48) == 0) &&
                (((*(long *)(lVar5 + 0x70) == 0 || (*(long *)(*(long *)(lVar5 + 0x70) + 0x80) == 0))
                 && (lVar7 = FUN_0047d760(lVar5 + 0x70), lVar7 != 0)))) &&
               ((*(long *)(lVar7 + 0x118) == lVar5 || (*(long *)(lVar7 + 0x118) == 0)))) {
              *(undefined1 *)(lVar7 + 0x124) = 0;
              *(undefined8 *)(lVar7 + 0x118) = 0;
            }
            FUN_004d43c0(lVar5);
            FUN_00404870(uVar2,lVar5);
          }
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x124) = 1;
  }
  return *(undefined8 *)(param_1 + 0x118);
}


