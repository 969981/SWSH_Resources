/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fab60; name: __tree_remove<std::__tree_node_base<void*>*>
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__tree_remove<std::__tree_node_base<void*>*>(std::__tree_node_base<void*>*,
   std::__tree_node_base<void*>*) */

void std::__tree_remove<std::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base _Var1;
  long *plVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  
  p_Var5 = *(__tree_node_base **)param_2;
  p_Var4 = param_2;
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = *(__tree_node_base **)(param_2 + 8);
    if (p_Var5 != (__tree_node_base *)0x0) goto LAB_007fabd8;
LAB_007fab94:
    bVar6 = false;
    p_Var9 = p_Var4 + 0x10;
    plVar2 = *(long **)(p_Var4 + 0x10);
    if ((__tree_node_base *)*plVar2 == p_Var4) goto LAB_007fabac;
  }
  else {
    p_Var9 = *(__tree_node_base **)(param_2 + 8);
    if (*(__tree_node_base **)(param_2 + 8) != (__tree_node_base *)0x0) {
      do {
        p_Var4 = p_Var9;
        p_Var9 = *(__tree_node_base **)p_Var4;
      } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
      p_Var5 = *(__tree_node_base **)(p_Var4 + 8);
      if (p_Var5 == (__tree_node_base *)0x0) goto LAB_007fab94;
    }
LAB_007fabd8:
    p_Var9 = p_Var4 + 0x10;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)p_Var9;
    bVar6 = true;
    plVar2 = *(long **)(p_Var4 + 0x10);
    if ((__tree_node_base *)*plVar2 == p_Var4) {
LAB_007fabac:
      *plVar2 = (long)p_Var5;
      if (p_Var4 == param_1) {
        p_Var3 = (__tree_node_base *)0x0;
        _Var1 = p_Var4[0x18];
        param_1 = p_Var5;
      }
      else {
        p_Var3 = *(__tree_node_base **)(*(long *)p_Var9 + 8);
        _Var1 = p_Var4[0x18];
      }
      goto joined_r0x007fac0c;
    }
  }
  plVar2[1] = (long)p_Var5;
  p_Var3 = (__tree_node_base *)**(undefined8 **)p_Var9;
  _Var1 = p_Var4[0x18];
joined_r0x007fac0c:
  if (p_Var4 != param_2) {
    lVar10 = *(long *)(param_2 + 0x10);
    *(long *)p_Var9 = lVar10;
    lVar8 = 0;
    if ((__tree_node_base *)**(undefined8 **)(param_2 + 0x10) != param_2) {
      lVar8 = 8;
    }
    *(__tree_node_base **)(lVar10 + lVar8) = p_Var4;
    lVar8 = *(long *)param_2;
    *(long *)p_Var4 = lVar8;
    *(__tree_node_base **)(lVar8 + 0x10) = p_Var4;
    lVar8 = *(long *)(param_2 + 8);
    *(long *)(p_Var4 + 8) = lVar8;
    if (lVar8 != 0) {
      *(__tree_node_base **)(lVar8 + 0x10) = p_Var4;
    }
    p_Var9 = p_Var4;
    if (param_1 != param_2) {
      p_Var9 = param_1;
    }
    p_Var4[0x18] = param_2[0x18];
    param_1 = p_Var9;
  }
  if ((_Var1 != (__tree_node_base)0x0) && (param_1 != (__tree_node_base *)0x0)) {
    if (!bVar6) {
      while( true ) {
        puVar7 = *(undefined8 **)(p_Var3 + 0x10);
        p_Var5 = param_1;
        if ((__tree_node_base *)*puVar7 != p_Var3) break;
        if (p_Var3[0x18] == (__tree_node_base)0x0) {
          p_Var3[0x18] = (__tree_node_base)0x1;
          *(undefined1 *)(puVar7 + 3) = 0;
          plVar2 = *(long **)(p_Var3 + 0x10);
          lVar8 = *plVar2;
          lVar10 = *(long *)(lVar8 + 8);
          *plVar2 = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar2;
          }
          *(long *)(lVar8 + 0x10) = plVar2[2];
          lVar10 = 0;
          if (*(long **)plVar2[2] != plVar2) {
            lVar10 = 8;
          }
          *(long *)((long)plVar2[2] + lVar10) = lVar8;
          *(long **)(lVar8 + 8) = plVar2;
          plVar2[2] = lVar8;
          p_Var5 = p_Var3;
          if (param_1 != *(__tree_node_base **)(p_Var3 + 8)) {
            p_Var5 = param_1;
          }
          p_Var3 = *(__tree_node_base **)*(__tree_node_base **)(p_Var3 + 8);
          lVar8 = *(long *)p_Var3;
          if (lVar8 == 0) goto LAB_007facf4;
LAB_007facec:
          p_Var4 = p_Var3;
          if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_007facf4;
LAB_007faecc:
          p_Var5 = p_Var4 + 0x10;
LAB_007faed0:
          lVar8 = *(long *)p_Var5;
          p_Var4[0x18] = *(__tree_node_base *)(lVar8 + 0x18);
          *(undefined1 *)(lVar8 + 0x18) = 1;
          *(undefined1 *)(*(long *)p_Var4 + 0x18) = 1;
          plVar2 = *(long **)p_Var5;
          lVar8 = *plVar2;
          lVar10 = *(long *)(lVar8 + 8);
          *plVar2 = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar2;
          }
          *(long *)(lVar8 + 0x10) = plVar2[2];
          lVar10 = 0;
          if (*(long **)plVar2[2] != plVar2) {
            lVar10 = 8;
          }
          *(long *)((long)plVar2[2] + lVar10) = lVar8;
          *(long **)(lVar8 + 8) = plVar2;
          plVar2[2] = lVar8;
          return;
        }
        lVar8 = *(long *)p_Var3;
        if (lVar8 != 0) goto LAB_007facec;
LAB_007facf4:
        lVar10 = *(long *)(p_Var3 + 8);
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0x18) == '\0')) {
          if (lVar8 != 0) {
            p_Var4 = p_Var3;
            if (*(char *)(lVar8 + 0x18) == '\0') goto LAB_007faecc;
            lVar10 = *(long *)(p_Var3 + 8);
          }
          *(undefined1 *)(lVar10 + 0x18) = 1;
          p_Var4 = *(__tree_node_base **)(p_Var3 + 8);
          p_Var3[0x18] = (__tree_node_base)0x0;
          lVar8 = *(long *)p_Var4;
          *(long *)(p_Var3 + 8) = lVar8;
          if (lVar8 != 0) {
            *(__tree_node_base **)(lVar8 + 0x10) = p_Var3;
          }
          p_Var5 = p_Var4 + 0x10;
          *(undefined8 *)p_Var5 = *(undefined8 *)(p_Var3 + 0x10);
          lVar8 = 0;
          if ((__tree_node_base *)**(undefined8 **)(p_Var3 + 0x10) != p_Var3) {
            lVar8 = 8;
          }
          *(__tree_node_base **)((long)*(undefined8 **)(p_Var3 + 0x10) + lVar8) = p_Var4;
          *(__tree_node_base **)p_Var4 = p_Var3;
          *(__tree_node_base **)(p_Var3 + 0x10) = p_Var4;
          goto LAB_007faed0;
        }
        p_Var3[0x18] = (__tree_node_base)0x0;
        p_Var4 = *(__tree_node_base **)(p_Var3 + 0x10);
        if (p_Var4 == p_Var5) goto LAB_007fadfc;
LAB_007fad14:
        if (p_Var4[0x18] == (__tree_node_base)0x0) goto LAB_007fadfc;
        p_Var3 = (__tree_node_base *)
                 (*(undefined8 **)(p_Var4 + 0x10))
                 [(__tree_node_base *)**(undefined8 **)(p_Var4 + 0x10) == p_Var4];
        param_1 = p_Var5;
      }
      if (p_Var3[0x18] == (__tree_node_base)0x0) {
        p_Var3[0x18] = (__tree_node_base)0x1;
        *(undefined1 *)(puVar7 + 3) = 0;
        lVar8 = *(long *)(p_Var3 + 0x10);
        plVar2 = *(long **)(lVar8 + 8);
        lVar10 = *plVar2;
        *(long *)(lVar8 + 8) = lVar10;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = lVar8;
        }
        plVar2[2] = *(long *)(lVar8 + 0x10);
        lVar10 = 0;
        if (**(long **)(lVar8 + 0x10) != lVar8) {
          lVar10 = 8;
        }
        *(long **)((long)*(long **)(lVar8 + 0x10) + lVar10) = plVar2;
        *plVar2 = lVar8;
        *(long **)(lVar8 + 0x10) = plVar2;
        p_Var5 = p_Var3;
        if (param_1 != *(__tree_node_base **)p_Var3) {
          p_Var5 = param_1;
        }
        p_Var3 = *(__tree_node_base **)(*(__tree_node_base **)p_Var3 + 8);
        lVar8 = *(long *)p_Var3;
        if (lVar8 != 0) goto LAB_007facb4;
LAB_007facbc:
        lVar10 = *(long *)(p_Var3 + 8);
        if ((lVar10 == 0) || (*(char *)(lVar10 + 0x18) != '\0')) {
          p_Var3[0x18] = (__tree_node_base)0x0;
          p_Var4 = *(__tree_node_base **)(p_Var3 + 0x10);
          if (p_Var4 != p_Var5) goto LAB_007fad14;
          p_Var4 = p_Var5;
LAB_007fadfc:
          p_Var4[0x18] = (__tree_node_base)0x1;
          return;
        }
LAB_007fae10:
        if (*(char *)(lVar10 + 0x18) == '\0') {
          p_Var5 = p_Var3 + 0x10;
          goto LAB_007faf38;
        }
      }
      else {
        lVar8 = *(long *)p_Var3;
        if (lVar8 == 0) goto LAB_007facbc;
LAB_007facb4:
        if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_007facbc;
        lVar10 = *(long *)(p_Var3 + 8);
        if (lVar10 != 0) goto LAB_007fae10;
      }
      *(undefined1 *)(lVar8 + 0x18) = 1;
      p_Var4 = *(__tree_node_base **)p_Var3;
      p_Var3[0x18] = (__tree_node_base)0x0;
      lVar8 = *(long *)(p_Var4 + 8);
      *(long *)p_Var3 = lVar8;
      if (lVar8 != 0) {
        *(__tree_node_base **)(lVar8 + 0x10) = p_Var3;
      }
      p_Var5 = p_Var4 + 0x10;
      *(undefined8 *)p_Var5 = *(undefined8 *)(p_Var3 + 0x10);
      lVar8 = 0;
      if ((__tree_node_base *)**(undefined8 **)(p_Var3 + 0x10) != p_Var3) {
        lVar8 = 8;
      }
      *(__tree_node_base **)((long)*(undefined8 **)(p_Var3 + 0x10) + lVar8) = p_Var4;
      *(__tree_node_base **)(p_Var4 + 8) = p_Var3;
      *(__tree_node_base **)(p_Var3 + 0x10) = p_Var4;
      p_Var3 = p_Var4;
LAB_007faf38:
      lVar8 = *(long *)p_Var5;
      p_Var3[0x18] = *(__tree_node_base *)(lVar8 + 0x18);
      *(undefined1 *)(lVar8 + 0x18) = 1;
      *(undefined1 *)(*(long *)(p_Var3 + 8) + 0x18) = 1;
      lVar8 = *(long *)p_Var5;
      plVar2 = *(long **)(lVar8 + 8);
      lVar10 = *plVar2;
      *(long *)(lVar8 + 8) = lVar10;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar8;
      }
      plVar2[2] = *(long *)(lVar8 + 0x10);
      lVar10 = 0;
      if (**(long **)(lVar8 + 0x10) != lVar8) {
        lVar10 = 8;
      }
      *(long **)((long)*(long **)(lVar8 + 0x10) + lVar10) = plVar2;
      *plVar2 = lVar8;
      *(long **)(lVar8 + 0x10) = plVar2;
      return;
    }
    p_Var5[0x18] = (__tree_node_base)0x1;
  }
  return;
}


