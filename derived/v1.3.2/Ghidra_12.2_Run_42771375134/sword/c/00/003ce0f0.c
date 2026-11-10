/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ce0f0; name: FUN_003ce0f0
 */


ulong * FUN_003ce0f0(long param_1,long param_2,long param_3,undefined2 *param_4,undefined8 param_5,
                    ulong *param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined2 local_70 [4];
  ulong *local_68;
  
  lVar14 = *(long *)(param_2 + 0x10);
  cVar4 = *(char *)(*(long *)(lVar14 + 0x50) + 0xd);
  lVar13 = param_2;
  if (cVar4 != '\0') {
    lVar15 = *(long *)(param_3 + 0x10);
    cVar5 = *(char *)(*(long *)(lVar15 + 0x50) + 0xd);
    if (((cVar4 != '\x01' || cVar5 != '\x04') &&
        ((cVar4 != '\x01' || cVar5 != '\x01' ||
         (lVar7 = FUN_003fc7b0(param_2), (*(byte *)(*(long *)(lVar7 + 0x50) + 0x2c) & 1) == 0)))) &&
       ((cVar4 != cVar5 || (*(uint *)(lVar15 + 0x58) <= *(uint *)(lVar14 + 0x58))))) {
      lVar13 = param_3;
      param_3 = param_2;
    }
  }
  if (param_6 == (ulong *)0x0) {
    param_6 = *(ulong **)(param_1 + 0x978);
    if (param_6 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x970);
      if (iVar2 == 0) {
        puVar11 = (ulong *)0x0;
      }
      else {
        plVar8 = (long *)FUN_00400d30();
        pcVar16 = *(code **)(*plVar8 + 0x10);
        plVar9 = (long *)FUN_00400d60();
        uVar10 = (**(code **)(*plVar9 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ShapeInteraction>::getName() [T = physx::Sc::ShapeInteraction]"
        ;
        if ((uVar10 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar11 = (ulong *)(*pcVar16)(plVar8,iVar2,pcVar1,
                                      "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4
                                     );
      }
      uVar3 = *(uint *)(param_1 + 0x960);
      local_68 = puVar11;
      if (uVar3 < (*(uint *)(param_1 + 0x964) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x958) + (ulong)uVar3 * 8) = puVar11;
        *(uint *)(param_1 + 0x960) = uVar3 + 1;
      }
      else {
        FUN_003d7720(param_1 + 0x750,&local_68);
      }
      if (puVar11 + (ulong)*(uint *)(param_1 + 0x968) * 0xd + -0xd < puVar11) {
        param_6 = *(ulong **)(param_1 + 0x978);
      }
      else {
        puVar6 = puVar11 + (ulong)*(uint *)(param_1 + 0x968) * 0xd + -0xd;
        puVar12 = *(ulong **)(param_1 + 0x978);
        do {
          param_6 = puVar6;
          *param_6 = (ulong)puVar12;
          puVar6 = param_6 + -0xd;
          puVar12 = param_6;
        } while (puVar11 <= param_6 + -0xd);
        *(ulong **)(param_1 + 0x978) = param_6;
      }
    }
    *(ulong *)(param_1 + 0x978) = *param_6;
    *(int *)(param_1 + 0x96c) = *(int *)(param_1 + 0x96c) + 1;
  }
  local_70[0] = *param_4;
  FUN_003f9050(param_6,param_3,lVar13,local_70,param_5);
  return param_6;
}


