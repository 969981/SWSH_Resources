/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462050; name: FUN_00462050
 */


void FUN_00462050(float param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  undefined2 local_78;
  float local_74;
  float local_54;
  
  local_54 = param_1;
  plVar2 = (long *)(**(code **)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) + 0x38))();
  if ((plVar2 != (long *)0x0) && (*(uint *)(plVar2 + 1) != 0)) {
    pcVar4 = (char *)(*plVar2 + 2);
    lVar5 = (ulong)*(uint *)(plVar2 + 1) << 2;
    do {
      if ((uint)*(ushort *)(pcVar4 + -2) == (param_3 & 0xffff)) {
        cVar6 = *pcVar4;
        uVar3 = FUN_00462210(param_2,param_3,cVar6,&local_54);
        if ((uVar3 & 1) == 0) {
          cVar6 = '\0';
        }
        lVar5 = *(long *)(param_2 + 0x10);
        if (lVar5 != 0) goto LAB_004620d0;
        goto LAB_00462170;
      }
      pcVar4 = pcVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  cVar6 = '\0';
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
LAB_004620d0:
    puVar1 = PTR_DAT_02712b50;
    if (*(int *)(lVar5 + 0x58) != 0) {
      puVar7 = *(undefined4 **)(lVar5 + 0x50);
      do {
        if ((uint)*(ushort *)((long)puVar7 + 6) == (param_3 & 0xffff)) {
          cVar6 = *(char *)((long)puVar7 + 5);
          fVar8 = (float)FUN_0049d1f0(*(undefined8 *)puVar1,param_2,param_3 & 0xffff,param_2 + 0x18)
          ;
          local_80 = CONCAT44(*puVar7,1);
          local_78 = (short)param_3;
          local_74 = fVar8;
          lVar5 = FUN_00461f30(param_2 + 0x48,&local_80);
          if (lVar5 != 0) {
            fVar9 = local_54 + fVar8;
            local_54 = local_54 * fVar8;
            if (cVar6 != '\x03') {
              local_54 = fVar9;
            }
          }
        }
        puVar7 = puVar7 + 8;
      } while (puVar7 != (undefined4 *)
                         (*(long *)(*(long *)(param_2 + 0x10) + 0x50) +
                         (ulong)*(uint *)(*(long *)(param_2 + 0x10) + 0x58) * 0x20));
    }
  }
LAB_00462170:
  if (cVar6 == '\x04') {
    local_54 = local_54 - param_1;
  }
  else {
    local_80 = 0;
    local_78 = (short)param_3;
    local_74 = param_1;
    FUN_00461f30(param_2 + 0x48,&local_80);
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),param_3,&local_54,4);
  return;
}


