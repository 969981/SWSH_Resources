/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc7550; name: FUN_00dc7550
 */


void FUN_00dc7550(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong local_40;
  undefined8 uStack_38;
  
  FUN_00db6220();
  *(undefined1 *)(param_1 + 0x77) = 1;
  if (((param_1[0x76] != 0) && (lVar5 = *(long *)(param_1[0x76] + 0x60), lVar5 != 0)) &&
     (uVar3 = FUN_0156b540(lVar5), (uVar3 & 1) != 0)) {
    uVar3 = (**(code **)(*(long *)(lVar5 + -0x50) + 0x70))();
    if ((uVar3 & 1) != 0) {
      uStack_38 = *(undefined8 *)(lVar5 + 0x68);
      local_40 = *(ulong *)(lVar5 + 0x60) & 0xffffffff;
      (**(code **)(*param_1 + 0x188))(param_1,&local_40);
    }
    puVar1 = PTR_DAT_027194d8;
    if ((char)param_1[0x77] == '\0') {
      *(undefined1 *)((long)param_1 + 0x669) = 0;
    }
    else if (*(char *)((long)param_1 + 0x669) == '\0') {
      uVar3 = (**(code **)(**(long **)PTR_DAT_027194d8 + 0x70))
                        (*(long **)PTR_DAT_027194d8,param_1 + 0x74,0);
      if ((uVar3 & 1) == 0) {
        bVar2 = (**(code **)(**(long **)puVar1 + 0x58))
                          (*(long **)puVar1,param_1 + 0x74,(char)param_1[0xcd],0);
        *(byte *)((long)param_1 + 0x669) = ~bVar2 & 1;
        plVar4 = (long *)param_1[0xc3];
        goto joined_r0x00dc764c;
      }
    }
  }
  plVar4 = (long *)param_1[0xc3];
joined_r0x00dc764c:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x60))();
  }
  return;
}


