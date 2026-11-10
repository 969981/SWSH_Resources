/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d310; name: FUN_0047d310
 */


undefined8 FUN_0047d310(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = *(undefined8 *)(param_1 + 2);
  local_58 = *(undefined8 *)param_1;
  lVar3 = FUN_004329e0(*param_1,param_1[1]);
  puVar1 = PTR_DAT_02713240;
  plVar6 = *(long **)(PTR_DAT_02713240 + 0x10);
  do {
    if (plVar6 == (long *)0x0) {
LAB_0047d3cc:
      bVar2 = true;
      uVar5 = FUN_0047c720(lVar3,&local_58,param_3,auStack_48,1,1,0);
      if ((int)uVar5 == 1) {
        if (*(long *)(puVar1 + 0x10) == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = *(int *)(*(long *)(puVar1 + 0x10) + 0x58) != *param_1;
        }
      }
      *PTR_DAT_02713258 = bVar2;
      return uVar5;
    }
    uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (plVar6[2] == lVar3) {
        if (*(char *)((long)plVar6 + 0x125) == '\0') goto LAB_0047d3c4;
        if (((int)plVar6[0x24] != 0) && ((int)plVar6[3] != 0xb5)) {
          return 1;
        }
LAB_0047d3ac:
        if ((int)plVar6[0x24] == 0) goto LAB_0047d3c4;
        bVar2 = (int)plVar6[3] != 0xb5;
      }
      else {
        if (*(char *)((long)plVar6 + 0x125) != '\0') goto LAB_0047d3ac;
LAB_0047d3c4:
        bVar2 = false;
      }
      FUN_0047d490(plVar6[2],bVar2);
      goto LAB_0047d3cc;
    }
    plVar6 = (long *)plVar6[1];
  } while( true );
}


