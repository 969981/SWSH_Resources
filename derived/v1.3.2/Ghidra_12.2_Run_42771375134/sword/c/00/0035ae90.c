/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035ae90; name: FUN_0035ae90
 */


void FUN_0035ae90(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  char *local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined6 uStack_36;
  
  lVar3 = *param_1;
  puVar6 = (uint *)(lVar3 + 0x10);
  uVar7 = *puVar6;
  if (uVar7 != 0) {
    lVar8 = *(long *)(lVar3 + 8);
    uVar9 = (ulong)(uVar7 - 1);
    pbVar10 = (byte *)(lVar8 + uVar9 * 0x10 + 8);
    if (*pbVar10 == 0) {
      bVar2 = 0;
      if ((char)param_1[9] != '\0') {
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar8 + uVar9 * 0x10));
        bVar2 = bVar2 & 1;
        lVar3 = *param_1;
        *(byte *)(param_1 + 9) = bVar2;
        lVar8 = *(long *)(lVar3 + 8);
        puVar6 = (uint *)(lVar3 + 0x10);
        uVar7 = *puVar6;
        uVar9 = (ulong)(uVar7 - 1);
        pbVar10 = (byte *)(lVar8 + uVar9 * 0x10 + 8);
      }
      *(byte *)(lVar8 + uVar9 * 0x10 + 9) = bVar2;
      *pbVar10 = bVar2;
    }
  }
  uStack_37 = (undefined1)param_1[9];
  local_40 = "Shapes";
  local_38 = 0;
  if (uVar7 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_36,uStack_37) << 8;
    *puVar1 = "Shapes";
    *puVar6 = *puVar6 + 1;
  }
  else {
    FUN_00321500(lVar3,&local_40);
  }
  plVar4 = (long *)(**(code **)(*(long *)param_1[5] + 0x58))();
  if (param_1[6] == 0) {
    lVar3 = 0;
  }
  else {
    uVar9 = (**(code **)(*plVar4 + 0x10))(plVar4,"RigidBodyFlags",&local_40);
    if (((uVar9 & 1) != 0) && (pcVar5 = strstr(local_40,"eKINEMATIC"), pcVar5 != (char *)0x0)) {
      (**(code **)(*(long *)param_1[6] + 0x170))((long *)param_1[6],1,1);
    }
    lVar3 = param_1[6];
  }
  FUN_0035b1c0(param_1,lVar3,param_2,0);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar7 = *(int *)(lVar3 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar7 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar3 = *param_1;
      uVar7 = *(int *)(lVar3 + 0x10) - 1;
    }
    *(uint *)(lVar3 + 0x10) = uVar7;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar7 != 0) && (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar7 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


