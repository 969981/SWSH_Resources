/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaaa40; name: FUN_00eaaa40
 */


void FUN_00eaaa40(long *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  byte *__s;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  ulong local_80;
  byte *pbStack_78;
  size_t local_70;
  long local_68;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar9 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar9);
    lVar7 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00de38c0(param_1,param_2,param_3,lVar7);
  param_1[0x90] = 0;
  puVar5 = PTR_DAT_02720110;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x198);
  param_1[10] = (long)(puVar5 + 0x1d8);
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  if ((int)param_1[0x87] == -1) {
    plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    puVar5 = PTR_DAT_027175d0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar1 = param_1 + 0x89;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    plVar11 = (long *)*plVar1;
    __s = (byte *)(param_1 + 0x8d);
    *plVar1 = (long)plVar6;
    if (plVar11 != (long *)0x0) {
      *plVar11 = (long)(puVar5 + 0x10);
      if (plVar11[1] != 0) {
        (**(code **)(*(long *)(plVar11[1] + 0x48) + 0x18))();
        plVar11[1] = 0;
      }
      (**(code **)(*(long *)param_1[0x8a] + 0x18))
                ((long *)param_1[0x8a],plVar11,param_1[0x8b],param_1[0x8c]);
    }
    param_1[0x8a] = (long)param_2;
    param_1[0x8b] = 0x10;
    param_1[0x8c] = 8;
    puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (4 - (long)*param_4)));
    piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
    puVar2 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
    piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x17) ||
       (uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar9 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar3 + uVar9);
    }
    uVar9 = 0xcbf29ce484222645;
    snprintf((char *)__s,0x20,"%lu",uVar8);
    lVar7 = *plVar1;
    local_70 = strlen((char *)__s);
    bVar4 = *__s;
    if (bVar4 != 0) {
      pbVar10 = (byte *)((long)param_1 + 0x469);
      do {
        uVar9 = (uVar9 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar4 != 0);
    }
    local_68 = 0;
    local_80 = uVar9;
    pbStack_78 = __s;
    FUN_00895ca0(lVar7,&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x4000000;
  return;
}


