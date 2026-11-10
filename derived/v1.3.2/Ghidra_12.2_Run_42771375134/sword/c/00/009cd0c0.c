/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cd0c0; name: FUN_009cd0c0
 */


/* WARNING: Removing unreachable block (ram,0x009cd234) */
/* WARNING: Removing unreachable block (ram,0x009cd27c) */

uint FUN_009cd0c0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__s;
  string *this;
  long lVar5;
  long *plVar6;
  long *plVar7;
  string *psVar8;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar2 = 0;
LAB_009cd334:
    return uVar2 & 1;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x28,8);
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_009d6700(puVar3);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    uVar2 = FUN_00884f80();
    plVar7 = *(long **)(param_1 + 0x18);
    __s = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(ulong)uVar2,1);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
      lVar5 = *(long *)(lVar4 + 0x80);
      *(long *)(lVar4 + 0x80) = lVar5 + 1;
      if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(__s,0,(ulong)uVar2);
      }
      *(long *)(lVar4 + 0x80) = lVar5;
      FUN_00884e90(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x420),__s);
      FUN_0075efb0(auStack_80,plVar6,0,1);
      psVar8 = *(string **)PTR_DAT_02716d10;
      local_68 = (void *)0x0;
      local_70 = 0;
      local_78 = 0;
      *(undefined1 *)((ulong)&local_78 | 1) = 0;
      this = (string *)puVar3[3];
      if (this == psVar8) {
        FUN_009b58d0(puVar3 + 3);
      }
      else {
        std::string::operator=(this,(string *)&local_78);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      FUN_0075f0a0(auStack_80);
      if (__s != (void *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7,__s,0,1);
      }
      uVar2 = FUN_009cd370(*(undefined8 *)(param_1 + 0xd8),puVar3);
      FUN_0075efb0(&local_78,plVar6,0,1);
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar3,0x28,8);
      FUN_0075f0a0(&local_78);
      goto LAB_009cd334;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


